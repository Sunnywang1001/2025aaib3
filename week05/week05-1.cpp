// week05-1.cpp
// LeetCode �ǲ��D Built-in Functions 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); // ��r�� string �� iostream �� cin �ӥ�
        string word; // �r��
        // ss >> word; // ���O cin >> word �@�ˡA�{�b�� ss �i�H�� ss >> word
        // ss >> word; // Ū�ĤG���A�|Ū��ĤG�Ӧr
        while (ss >> word) { // �@��Ū�AŪ�줣��Ū����
            // �o������Ƴ��S����
        }
        cout << word; // �����@�ӽT�{�A�ݵ��G��
        return word.length(); // �̫�A����װe�X�h
    }
};
