#!/bin/sh

./configure CFLAGS="-I`pwd`/../glib/out/include/glib-2.0 -I`pwd`/../glib/out/lib/glib-2.0/include"  LDFLAGS="-L`pwd`/../glib/out/lib -lglib-2.0 -lgobject-2.0" --prefix=`pwd`/out \
--with-qt4=no \
--with-qt5=no \
--with-csharp=no \
--with-erlang=no \
--with-nodejs=no \
--with-lua=no \
--with-python=no \
--with-perl=no \
--with-php=no \
--with-php_extension=no \
--with-dart=no \
--with-ruby=no \
--with-haskell=no \
--with-go=no \
--with-haxe=no \
--with-dotnetcore=no \
--with-d=no \
--with-java=yes
