#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/anviksha/ws_moveit/src/moveit/moveit_commander"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/anviksha/ws_moveit/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/anviksha/ws_moveit/install/lib/python2.7/dist-packages:/home/anviksha/ws_moveit/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/anviksha/ws_moveit/build" \
    "/usr/bin/python2" \
    "/home/anviksha/ws_moveit/src/moveit/moveit_commander/setup.py" \
     \
    build --build-base "/home/anviksha/ws_moveit/build/moveit/moveit_commander" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/anviksha/ws_moveit/install" --install-scripts="/home/anviksha/ws_moveit/install/bin"
