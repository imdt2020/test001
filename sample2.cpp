// sample2.cpp : C++ �� Lua ��ȣ���� ���� ������ �˾ƺ���.
//

extern "C" 
{
	#include "lua.h"
	#include "lualib.h"
	#include "lauxlib.h"
};

#include "lua_tinker.h"

static int cpp_int = 100;

int main()
{
	// Lua �� �ʱ�ȭ �Ѵ�.
	lua_State* L = lua_open();

	// Lua �⺻ �Լ����� �ε��Ѵ�.- print() ���
	luaopen_base(L);

	// 
	lua_tinker::set(L, "cpp_int", cpp_int);

    lua_tinker::set(L, "cpp_int_ptr", &cpp_int);
    int * abc = &cpp_int;
    int * def= lua_tinker::get<int *>(L, "cpp_int_ptr");
    printf("abc = %d,def=%d \n",*abc ,*def);

	//
	lua_tinker::dofile(L, "sample2.lua");

	// sample1.lua �� �Լ��� ȣ���Ѵ�.
	int lua_int = lua_tinker::get<int>(L, "lua_int");

	// lua_int �� ���
	printf("lua_int = %d\n", lua_int);

    printf("cpp_int = %d\n", cpp_int);

	// ���α׷� ����
	lua_close(L);

	return 0;
}
