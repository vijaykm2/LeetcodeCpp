cmake_minimum_required(VERSION 3.16)
project(LeetCodeCpp)

set(CMAKE_CXX_STANDARD 20)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
set (CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fsanitize=address")
set (CMAKE_LINKER_FLAGS_DEBUG "${CMAKE_LINKER_FLAGS_DEBUG} -fsanitize=address")

add_executable(LeetCodeCpp main.cpp easy/TwoSum/TwoSum.cpp easy/ReverseInteger/ReverseInteger.cpp easy/ReverseInteger/ReverseInteger.h easy/PalindromeNumber/PalindromeNumber.cpp easy/PalindromeNumber/PalindromeNumber.h easy/RomanToInt.cpp easy/RomanToInt.h easy/LongestCommonPrefix/LongestCommonPrefix.cpp easy/ValidParenthesis.cpp easy/MergeTwoSortedLists.cpp easy/MergeTwoSortedLists.h RemoveDuplicates.cpp RemoveDuplicates.h)