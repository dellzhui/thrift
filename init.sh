#!/bin/sh

./configure CFLAGS="-I/home/work/opensource/Git/glib/out/include/glib-2.0 -I/home/work/opensource/Git/glib/out/lib/glib-2.0/include"  LDFLAGS="-L/home/work/opensource/Git/glib/out/lib -lglib-2.0 -lgobject-2.0" --with-php=no --prefix=`pwd`/out

