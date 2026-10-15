windres source/my.rc -O coff -o source/my.res
g++ source/main.cpp source/my.res -o app -lsfml-graphics -lsfml-window -lsfml-system -O2 -std=c++23 -I ./SFML-2.5.1/include/ -L ./SFML-2.5.1/lib/