#!/bin/sh

./bootstrap.sh

[ -x configure ] || exit 1

./init.sh

make || exit 1

make install || exit 1

echo "build succeed"


