#include <iostream>
#include <vector>

using namespace std;


void findXAxisIntersections(int minx1,int maxx1,int miny1,int maxy1,int minx2,int maxx2,int miny2,int maxy2, vector<vector<int>> &results) {
    vector<int> push;
    //rec2 boundaries outside rec1
    if (minx2 < minx1 && maxx2 > maxx1) {
        if (miny2 > miny1 && maxy2 < maxy1) {
            push.push_back(minx1);
            push.push_back(miny2);
            results.push_back(push);
            push.clear();
            push.push_back(minx1);
            push.push_back(maxy2);
            results.push_back(push);
            push.clear();
            push.push_back(maxx1);
            push.push_back(miny2);
            results.push_back(push);
            push.clear();
            push.push_back(maxx1);
            push.push_back(maxy2);
            results.push_back(push);
            push.clear();
        }
        if (miny2 > miny1 && maxy2 > maxy1) {
            push.push_back(minx1);
            push.push_back(miny2);
            results.push_back(push);
            push.clear();
            push.push_back(maxx1);
            push.push_back(miny2);
            results.push_back(push);
            push.clear();
        }
        if (miny2 < miny1 && maxy2 < maxy1) {
            push.push_back(minx1);
            push.push_back(maxy2);
            results.push_back(push);
            push.clear();
            push.push_back(maxx1);
            push.push_back(maxy2);
            results.push_back(push);
            push.clear();
        }
    }
    //rec2 offset right
    if (minx2 > minx1 && maxx2 > maxx1) {
        if (miny2 > miny1 && maxy2 < maxy1) {
            push.push_back(maxx1);
            push.push_back(miny2);
            results.push_back(push);
            push.clear();
            push.push_back(maxx1);
            push.push_back(maxy2);
            results.push_back(push);
            push.clear();
        }
        if (miny2 > miny1 && maxy2 > maxy1) {
            push.push_back(maxx1);
            push.push_back(miny2);
            results.push_back(push);
            push.clear();
        }
        if (miny2 < miny1 && maxy2 < maxy1) {
            push.push_back(maxx1);
            push.push_back(maxy2);
            results.push_back(push);
            push.clear();
        }
    }
    //rec2 offset left
    if (minx2 < minx1 && maxx2 < maxx1) {
        if (miny2 > miny1 && maxy2 < maxy1) {
            push.push_back(minx1);
            push.push_back(miny2);
            results.push_back(push);
            push.clear();
            push.push_back(minx1);
            push.push_back(maxy2);
            results.push_back(push);
            push.clear();
        }
        if (miny2 > miny1 && maxy2 > maxy1) {
            push.push_back(minx1);
            push.push_back(miny2);
            results.push_back(push);
            push.clear();
        }
        if (miny2 < miny1 && maxy2 < maxy1) {
            push.push_back(minx1);
            push.push_back(maxy2);
            results.push_back(push);
            push.clear();
        }
    }
}

void findYAxisIntersections(int minx1,int maxx1,int miny1,int maxy1,int minx2,int maxx2,int miny2,int maxy2, vector<vector<int>> &results) {
    vector<int> push;
    //rec2 boundaries outside rec1
    if (miny2 < miny1 && maxy2 > maxy1) {
        if (minx2 > minx1 && maxx2 < maxx1) {
            push.push_back(minx2);
            push.push_back(miny1);
            results.push_back(push);
            push.clear();
            push.push_back(minx2);
            push.push_back(maxy1);
            results.push_back(push);
            push.clear();
            push.push_back(maxx2);
            push.push_back(miny1);
            results.push_back(push);
            push.clear();
            push.push_back(maxx2);
            push.push_back(maxy1);
            results.push_back(push);
            push.clear();
        }
        if (minx2 > minx1 && maxx2 > maxx1) {
            push.push_back(minx2);
            push.push_back(miny1);
            results.push_back(push);
            push.clear();
            push.push_back(minx2);
            push.push_back(maxy1);
            results.push_back(push);
            push.clear();
        }
        if (minx2 < minx1 && maxx2 < maxx1) {
            push.push_back(maxx2);
            push.push_back(miny1);
            results.push_back(push);
            push.clear();
            push.push_back(maxx2);
            push.push_back(maxy1);
            results.push_back(push);
            push.clear();
        }
    }
    //rec2 offset up
    if (miny2 > miny1 && maxy2 > maxy1) {
        if (minx2 > minx1 && maxx2 < maxx1) {
            push.push_back(minx2);
            push.push_back(maxy1);
            results.push_back(push);
            push.clear();
            push.push_back(maxx2);
            push.push_back(maxy1);
            results.push_back(push);
            push.clear();
        }
        if (minx2 > minx1 && maxx2 > maxx1) {
            push.push_back(minx2);
            push.push_back(maxy1);
            results.push_back(push);
            push.clear();
        }
        if (minx2 < minx1 && maxx2 < maxx1) {
            push.push_back(minx2);
            push.push_back(maxy1);
            results.push_back(push);
            push.clear();
        }
    }
    //rec2 offset down
    if (miny2 < miny1 && maxy2 < maxy1) {
        if (minx2 > minx1 && maxy2 < maxy1) {
            push.push_back(minx2);
            push.push_back(miny1);
            results.push_back(push);
            push.clear();
            push.push_back(maxx2);
            push.push_back(miny1);
            results.push_back(push);
            push.clear();
        }
        if (minx2 > minx1 && maxx2 > maxx1) {
            push.push_back(minx2);
            push.push_back(miny1);
            results.push_back(push);
            push.clear();
        }
        if (minx2 < minx1 && maxx2 < maxx1) {
            push.push_back(maxx2);
            push.push_back(miny1);
            results.push_back(push);
            push.clear();
        }
    }
}

//lines must cross for there to be an intersection
void findIntersections(vector<vector<int>> rec1, vector<vector<int>> rec2, vector<vector<int>> &results) {
    int minx1 = rec1[0][0];
    int maxx1 = rec1[2][0];
    int miny1 = rec1[0][1];
    int maxy1 = rec1[2][1];
    int minx2 = rec2[0][0];
    int maxx2 = rec2[2][0];
    int miny2 = rec2[0][1];
    int maxy2 = rec2[2][1];

    findXAxisIntersections(minx1,maxx1,miny1,maxy1,minx2,maxx2,miny2,maxy2,results);
    findYAxisIntersections(minx1,maxx1,miny1,maxy1,minx2,maxx2,miny2,maxy2,results);
}

void printResults(vector<vector<int>> &results) {
    for (int i=0; i<results.size(); i++) {
        cout << "(";
        for (int j=0; j<results[0].size(); j++) {
            cout << results[i][j];
            if (j==0) {
                cout <<",";
            }
        }
        cout << ")";
    }
}

//Rectangles written in x,y form, clock-wise from bottom left
int main() {
    vector<vector<int>> rec1 = {{1,1},{1,5},{5,5},{5,1}};
    vector<vector<int>> rec2 = {{2,2},{2,6},{4,6},{4,2}};
    vector<vector<int>> results;
    findIntersections(rec1, rec2, results);
    printResults(results);
}