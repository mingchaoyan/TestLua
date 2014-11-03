step0.
edit power.c and hello.lua
step1.
gcc -Wall -shared -fPIC -o power.so -I /usr/local/lua-5.2.3/src/ power.c
step2.
lua hello.lua
