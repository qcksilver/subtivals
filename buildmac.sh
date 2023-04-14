"/opt/homebrew/Cellar/qt@5/5.15.8_2/bin/qmake" ./src/subtivals.pro -spec macx-clang CONFIG+=qtquickcompiler
make -f ./Makefile qmake_all
make
make clean
