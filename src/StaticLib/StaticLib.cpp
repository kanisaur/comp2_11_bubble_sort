#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
    if (begin == nullptr || end == nullptr || begin >= end) 
    {
        return false;
    }

    size_t n = end - begin;
    for (size_t i = 0; i < n - 1; ++i)
    {
        for (size_t j = 0; i < n - 1; j++)
        {
            if (begin[j].key > begin[j + 1].key)
            {
                item temp = begin[j];
                begin[j] = begin[j + 1];
                begin[j + 1] = temp;
            }
        }
    }
	
	return true;
}
