#include <iostream>
#include "gtest/gtest.h"
#include "main.h"

//Сложение
TEST(Sum, summa) {
    complex a, b, result;
    //Все положительные числа
     a.Num_1 = 3;
     a.Num_2 = 9;
     b.Num_1 = 4;
     b.Num_2 = 4;
     result = a + b;
     EXPECT_TRUE(result.Num_1 == 7);
     EXPECT_TRUE(result.Num_2 == 13);

    //В результате отрицательные числа (result.Num_2)
    a.Num_1 = 1;
    a.Num_2 = -9;
    b.Num_1 = 4;
    b.Num_2 = 4;
    result = a + b;
    EXPECT_TRUE(result.Num_1 == 5);
    EXPECT_TRUE(result.Num_2 == -5);

  //В результате отрицательные числа (result.Num_1)
    a.Num_1 = -7;
    a.Num_2 = 9;
    b.Num_1 = 4;
    b.Num_2 = 4;
    result = a + b;
    EXPECT_TRUE(result.Num_1 == -3);
    EXPECT_TRUE(result.Num_2 == 13);

}

//Вычитание
TEST(sub, subs) {
    complex a, b, result;

    //Все положительные числа
    a.Num_1 = 3;
    a.Num_2 = 9;
    b.Num_1 = 2;
    b.Num_2 = 4;
    result = a - b;
    EXPECT_TRUE(result.Num_1 == 1);
    EXPECT_TRUE(result.Num_2 == 5);

    //В результате отрицательные числа (result.Num_2)
    a.Num_1 = 7;
    a.Num_2 = -9;
    b.Num_1 = 4;
    b.Num_2 = 4;
    result = a - b;
    EXPECT_TRUE(result.Num_1 == 3);
    EXPECT_TRUE(result.Num_2 == -13);

    //В результате отрицательные числа (result.Num_1)
    a.Num_1 = -7;
    a.Num_2 = 9;
    b.Num_1 = 4;
    b.Num_2 = 4;
    result = a - b;
    EXPECT_TRUE(result.Num_1 == -11);
    EXPECT_TRUE(result.Num_2 == 5);
}

 //Умножение
TEST(mul, multiplay){
    complex a, b, result;

    //Все положительные числа
    a.Num_1 = 13;
    a.Num_2 = 9;
    b.Num_1 = 7;
    b.Num_2 = 4;
    result = a * b;
    EXPECT_TRUE(result.Num_1 == 55);
    EXPECT_TRUE(result.Num_2 == 115);

    //В результате отрицательные числа (result.Num_2)
    a.Num_1 = 7;
    a.Num_2 = -9;
    b.Num_1 = 4;
    b.Num_2 = 4;
    result = a * b;
    EXPECT_TRUE(result.Num_1 == 64);
    EXPECT_TRUE(result.Num_2 == -8);

    //В результате отрицательные числа (result.Num_1)
    a.Num_1 = -7;
    a.Num_2 = 9;
    b.Num_1 = 4;
    b.Num_2 = 4;
    result = a * b;
    EXPECT_TRUE(result.Num_1 == -64);
    EXPECT_TRUE(result.Num_2 == 8);
}

//Деление
TEST(div, divided) {
    complex a, b, result;

    //Делитель "0"
    a.Num_1 = 0;
    a.Num_2 = 0;
    b.Num_1 = 7;
    b.Num_2 = 4;
    result = a / b;
    //Cообщение об ошибке
    EXPECT_TRUE(result.Num_1 == 0);
    EXPECT_TRUE(result.Num_2 == 0);

    //Все положительные числа
    a.Num_1 = 3;
    a.Num_2 = 2;
    b.Num_1 = 4;
    b.Num_2 = 7;
    result = a / b;
    EXPECT_TRUE(result.Num_1 == 2);
    EXPECT_TRUE(result.Num_2 == 0);

    //В результате отрицательные числа (result.Num_2)
    a.Num_1 = 1;
    a.Num_2 = 2;
    b.Num_1 = 4;
    b.Num_2 = 7;
    result = a / b;
    EXPECT_TRUE(result.Num_1 == 3);
    EXPECT_TRUE(result.Num_2 == -2);

    //В результате отрицательные числа (result.Num_1)
    a.Num_1 = 3;
    a.Num_2 = 2;
    b.Num_1 = 4;
    b.Num_2 = -14;
    result = a / b;
    EXPECT_TRUE(result.Num_1 == -1);
    EXPECT_TRUE(result.Num_2 == 3);
}

//Вывод
TEST(out, output){
    complex result;

    //result.Num_1 == 0 && result.Num_2 == 0
    result.Num_1 = 0;
    result.Num_2 = 0;
    testing::internal::CaptureStdout();
    cout << result;
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "0");

    //result.Num_1 == 0
    result.Num_1 = 0;
    result.Num_2 = 78;
    testing::internal::CaptureStdout();
    cout << result;
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "78i");

    result.Num_1 = 0;
    result.Num_2 = -19;
    testing::internal::CaptureStdout();
    cout << result;
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "-19i");


    //result.Num_2 == 0
    result.Num_1 = 6;
    result.Num_2 = 0;
    testing::internal::CaptureStdout();
    cout << result;
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "6");

    result.Num_1 = -36;
    result.Num_2 = 0;
    testing::internal::CaptureStdout();
    cout << result;
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "-36");

    //result.Num_2 < 0
    result.Num_1 = 6;
    result.Num_2 = -34;
    testing::internal::CaptureStdout();
    cout << result;
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "6-34i");

    result.Num_1 = -6;
    result.Num_2 = -3;
    testing::internal::CaptureStdout();
    cout << result;
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "-6-3i");

    //result.Num_1 != 0 && result.Num_2 != 0
    result.Num_1 = 6;
    result.Num_2 = 45;
    testing::internal::CaptureStdout();
    cout << result;
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "6 + 45i");

    result.Num_1 = -6;
    result.Num_2 = 45;
    testing::internal::CaptureStdout();
    cout << result;
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "-6 + 45i");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
