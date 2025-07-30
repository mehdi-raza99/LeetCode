class Solution {
public:
    int minDistance(string word1, string word2) {
     int size1=word1.length(),size2=word2.length();
     vector<vector<int>> minDistanceTable(size1+1, vector<int>(size2+1,0));

     for(int i=0;i<=size1;i++)     minDistanceTable[i][0]=i;
     for(int j=0;j<=size2;j++)     minDistanceTable[0][j]=j;
     
     
     for(int i=1;i<=size1;i++){ 
        for(int j=1;j<=size2;j++){
            if(word1[i-1] == word2[j-1]){
                minDistanceTable[i][j]=minDistanceTable[i-1][j-1];
            }
            else{
                minDistanceTable[i][j]=1+ min({minDistanceTable[i-1][j],minDistanceTable[i][j-1],minDistanceTable[i-1][j-1]});
            }
        }
    }

    return minDistanceTable[size1][size2];
    }
};