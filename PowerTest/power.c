#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"

static int isquare(lua_State *L){
    float rtrn = lua_tonumber(L, -1);
    printf("Top of square(), nbr=%f\n",rtrn);
    lua_pushnumber(L,rtrn*rtrn);
    return 1;
}

int luaopen_power(lua_State *L){
    lua_register(
            L, 
            "square",
            isquare
            );  
    return 0;
}
