/// week05-3b.cpp 三合一 Part1/Part2 Input/Output
/// Part3: 把字串用迴圈輸出   Part4: 反轉字串 algorithm
///CPE 近年考的題目 UVA 483 Word Scramble 把字弄反

#include <iostream>
#include <sstream>   /// Part 3: 把字串用來段自
#include <string>
#include <algorithm> /// Part 4: 反轉字串, 要用到 algorithm 演算法

using namespace std;

int main()
{
    string line;  /// Part 1: Input
    while (getline(cin, line)) {
        /// 輸入一行字串, 獨到 Ctrl+Z 才結束
        stringstream ss(line);  /// 字串用來段自
        string word;
        while (ss >> word) {    /// Part 3: 把字串用來段自
            reverse(word.begin(), word.end());  /// Part 4: 反過來
            cout << " " << word;
        }
        cout << endl;  /// 換行
        ///part2:output
        ///cout << line << end1:
    }

}

