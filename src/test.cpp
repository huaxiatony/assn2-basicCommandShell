#include "gtest/gtest.h"
#include "../src/Base.h"
#include "../src/And.h"
#include "../src/Or.h"
#include "../src/Command.h"
#include "../src/Connector.h"

using namespace std;

TEST(Basic, test) {
    Command child("echo hello world");
    EXPECT_EQ(0, child.execute());
}

 TEST(TEST_AND, test){
 Base* leftNode = 1;
 Base* rightNode = 0;
 EXPECT_EQ(0,And(child1,child2));
 }
 
 TEST(TEST_OR, test){
 Base* leftNode = 1;
 Base* rightNode = 0;
 EXPECT_EQ(1,Or(child1,child2));
 }

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

