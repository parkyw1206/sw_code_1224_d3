/************************************************************
 *  name : Youngwoo Park
 *  date : 10-05-2020
 *  level: d3
 *  problem source: programmers
 *  lang: C++
 *  skill:  map..?
 * *********************************************************/
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, NUM, index;
	string str,longStr;
   	int foundIndex, numIndex;
    map<string, int> m;
    char tempChar;
    string n[10] = {"ZRO", "ONE", "TWO", "THR", "FOR", "FIV", "SIX", "SVN", "EGT", "NIN"};
    string temp;
    vector<int> v;
	m["ZRO"] = 0;
    m["ONE"] = 1; 
    m["TWO"] = 2;
    m["THR"] = 3;
    m["FOR"] = 4;
    m["FIV"] = 5;
    m["SIX"] = 6;
    m["SVN"] = 7;
    m["EGT"] = 8;
    m["NIN"] = 9 ;

    cin>>T;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
		getline(cin, str, ' ');
        getline(cin, str);
        
		NUM = 0;
		index = stoi(str);
        temp = "";
        
        getline(cin, longStr);
        for(NUM = 0 ; NUM <= longStr.size() ; NUM++){
        	tempChar = longStr[NUM];
        	if(tempChar != ' ')
                temp.push_back(tempChar);
            else{
                v.push_back(m[temp]);
        		temp = "";
            }
        }

        sort(v.begin(), v.end());
        cout << "#" << test_case << endl ;
        
        for(int i = 0 ; i < v.size(); i++){
        	cout << n[v[i]];
            if(i == v.size() -1)
                cout << endl;
            else
                cout << " ";
       	}
        v.clear();
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}