#include <iostream>
#include "gtest/gtest.h"
#include "Function.h"

using namespace std;

TEST(out, output) {
   const char* str = "Денис";

    testing::internal::CaptureStdout();
    trans(str, angl, rus);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "Denis");

    const char* str_1 = "Я это сделал";

    testing::internal::CaptureStdout();
    trans(str_1, angl, rus);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "Ya eto sdelal");

    const char* str_2 = "Съешь этих мягких французских булок и выпей чаю";

    testing::internal::CaptureStdout();
    trans(str_2, angl, rus);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "S'eshi etih myagkih francyzskih bylok i vyipei chau");

    const char* str_3 = "Ёж Иван ест йогурт под ёлкой";

    testing::internal::CaptureStdout();
    trans(str_3, angl, rus);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "Iog Ivan est iogyrt pod iolkoi");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
