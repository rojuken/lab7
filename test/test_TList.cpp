#include "List.h"
#include "../gtest/gtest.h"
TEST(TList, can_create_list)
{
	ASSERT_NO_THROW(TList<int> a);
}
TEST(TList, can_copy_list)
{
	TList<int> A;
	ASSERT_NO_THROW(TList<int> B(A));
}
TEST(TList, can_insfirst)
{
	TList<int> A;
	A.InsFirst(1);
	A.InsFirst(5);
	ASSERT_NO_THROW(A.GetFirst());
}
TEST(TList, can_inslast)
{
	TList<int> A;
	A.InsLast(5);
	A.InsLast(4);
	ASSERT_NO_THROW(A.GetLast());
}
TEST(TList, can_get_count)
{
	TList<int> A;
	A.InsFirst(2);
	A.InsFirst(3);
	A.InsFirst(4);
	ASSERT_EQ(A.GetCount(), 3);
}
TEST(TList, is_full_false)
{
	TList<int> A;
	ASSERT_EQ(A.IsFull(), false);
}
TEST(TList, is_empty_true)
{
	TList<int> A;
	ASSERT_EQ(A.IsEmpty(), true);
}
TEST(TList, is_empty_false)
{
	TList<int> A;
	A.InsFirst(2);
	ASSERT_EQ(A.IsEmpty(), false);
}
TEST(TList, can_assign_list)
{
	TList<int> A;
	ASSERT_NO_THROW(TList<int> B = A);
}
TEST(TList, can_del_first_elem)
{
	TList<int> A;
	A.InsFirst(3);
	A.InsLast(2);
	ASSERT_NO_THROW(A.DelFirst());
}
TEST(TList, can_del_last_elem)
{
	TList<int> A;
	A.InsFirst(3);
	A.InsLast(2);
	ASSERT_NO_THROW(A.DelLast());
}
TEST(TListElem, can_get_data_listelem)
{
	TListElem<int> A(15);
	EXPECT_EQ(A.GetData(), 15);
}
TEST(TListElem, can_set_data_listelem)
{
	TListElem<int> temp(15);
	ASSERT_NO_THROW(temp.SetData(20));
}

TEST(TList, can_load_to_file)
{
	TList<int> A;
	A.InsFirst(1);
	A.InsFirst(2);
	A.InsFirst(3);
	ASSERT_NO_THROW(A.LoadToFile());
}