
-- ���� g_test �� ��� ���� _test �� ���� ����Ѵ�.
print(g_test._test)

-- temp �� �� test ��ü�� ����� �ִ´�.
temp = test(4)

-- test �� ��� ���� _test ���� ����Ѵ�.
print(temp._test)

-- Lua �� �߰����� ���� A ����ü���� a��� ������ �ִ´�.
a = g_test:get()

-- ������ ��ü a�� Lua->C++�� �����Ѵ�.
temp:set(a)




