/// week05-3b.cpp �T�X�@ Part1/Part2 Input/Output
/// Part3: ��r��ΰj���X   Part4: ����r�� algorithm
///CPE ��~�Ҫ��D�� UVA 483 Word Scramble ��r�ˤ�

#include <iostream>
#include <sstream>   /// Part 3: ��r��ΨӬq��
#include <string>
#include <algorithm> /// Part 4: ����r��, �n�Ψ� algorithm �t��k

using namespace std;

int main()
{
    string line;  /// Part 1: Input
    while (getline(cin, line)) {
        /// ��J�@��r��, �W�� Ctrl+Z �~����
        stringstream ss(line);  /// �r��ΨӬq��
        string word;
        while (ss >> word) {    /// Part 3: ��r��ΨӬq��
            reverse(word.begin(), word.end());  /// Part 4: �ϹL��
            cout << " " << word;
        }
        cout << endl;  /// ����
        ///part2:output
        ///cout << line << end1:
    }

}

