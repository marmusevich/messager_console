#define BOOST_TEST_MODULE CMessageTest
#include <boost/test/included/unit_test.hpp>

/*
#include "IMessage.h"
#include "IData.h"

#include <iostream>
#include <string>
#include <boost/shared_ptr.hpp>
//#include <boost/smart_ptr/scoped_ptr.hpp>


using namespace std;
*/


BOOST_AUTO_TEST_CASE(first_test)
{
  int i = 1;
  BOOST_TEST(i);
  //BOOST_TEST(i == 2);

   int a = 5;

   BOOST_REQUIRE(a != 0);

}



//BOOST_AUTO_TEST_SUITE(CMessageTest)

//BOOST_AUTO_TEST_CASE(test)
//{
//   int a = 5;

   //BOOST_REQUIRE(a != 0);
//}

//BOOST_AUTO_TEST_SUITE_END()
