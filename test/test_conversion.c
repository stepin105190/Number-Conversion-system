#include "unity.h"
#include "test_conversion.h"
    void setUp()
	{	}
	void tearDown()
	{	}


	void test_Bin_to_Dec(void)
	{
                 TEST_ASSERT_EQUAL(10,Bin_to_Dec(1010));
	}
	void test_Bin_to_Oct(void)
	{
                 TEST_ASSERT_EQUAL(1,Bin_to_Oct(0001));
	}

    void test_Bin_to_Hex(void)
    {
                 TEST_ASSERT_EQUAL('A',Bin_to_Hex(1010));
    }
     void test_Dec_to_Bin(void)
    {
                 TEST_ASSERT_EQUAL(0001,Dec_to_Bin(1));
    }

     void test_Dec_to_Hex(void)
    {
                 TEST_ASSERT_EQUAL('A',Dec_to_Hex(10));
    }
     void test_Oct_to_Bin(void)
    {
                 TEST_ASSERT_EQUAL(1,Oct_to_Bin(1));
    }
     void test_Oct_to_Hex(void)
    {
                 TEST_ASSERT_EQUAL('A',Oct_to_Hex(12));
    }

  /*   void test_Hex_to_Dec(void)
    {
                 TEST_ASSERT_EQUAL(10,Hex_to_Dec('A'));
    }
    void test_Bin_to_Hex(void)
    {
                 TEST_ASSERT_EQUAL('A',Bin_to_Hex(1010));
    }
     void test_Bin_to_Hex(void)
    {
                 TEST_ASSERT_EQUAL('A',Bin_to_Hex(1010));
    }*/

	int test_main(void)
	{
	  	UNITY_BEGIN();


	  	RUN_TEST(test_Bin_to_Dec);
	  	RUN_TEST(test_Bin_to_Oct);
	  	RUN_TEST(test_Bin_to_Hex);
        RUN_TEST(test_Dec_to_Bin);
        RUN_TEST(test_Dec_to_Hex);
        RUN_TEST(test_Oct_to_Bin);
        RUN_TEST(test_Oct_to_Hex);




  		return UNITY_END();
	}
