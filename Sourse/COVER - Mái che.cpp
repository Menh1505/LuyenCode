/*
https://luyencode.net/problem/COVER?fbclid=IwAR22kyaK7yJ8vKxGO99OOhWVdjdwKQYvHy1qw09BMCCS1isCcUpv6-0z_xA
*/

#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int row, colum, k;
    cin >> row >> colum >> k;
    int a[501][501], b[501][501];
    for (int i = 1; i <= row; ++i) 
    {
        a[i][0] = 0;
        for (int j = 1; j <= colum; ++j) 
        {
            char c;
            cin >> c;
            a[i][j] = a[i][j - 1] + c - 48;
        }
    }
    for (int j = 1; j <= colum; ++j) 
    {
        b[0][j] = 0;
        for (int i = 1; i <= row; ++i) 
        {
            b[i][j] = b[i - 1][j] + (a[i][j] - a[i][j - 1]);
        }
    }
    int Min = INT_MAX;
    bool check = false;
    for (int width = 1; width <= colum; ++width) 
    {
        if (k % width == 0) 
        {
            int height = k / width;
            if (height <= row) 
            {
                check = true;
                int start_row = 1, start_col = 1;
                int finish_col = width;
                int finish_row = height;
                int sum = 0, sum2 = 0;
                while (finish_col <= colum && finish_row <= row)
                {
                    if (start_col == 1) {
                        if (sum2 == 0) {
                            for (int i = start_row; i <= finish_row; ++i) 
                            {
                                sum += a[i][finish_col] - a[i][start_col - 1];
                            }
                            Min = min(Min, sum);
                            sum2 = sum;
                        }
                        else 
                        {
                            sum = sum2;
                            sum -= (a[start_row - 1][finish_col] - a[start_row - 1][start_col - 1]);
                            sum += (a[finish_row][finish_col] - a[finish_row][start_col - 1]);
                            sum2 = sum;
                            Min = min(Min, sum);
                        }
                    }
                    else 
                    {
                        sum -= (b[finish_row][start_col - 1] - b[start_row - 1][start_col - 1]);
                        sum += (b[finish_row][finish_col] - b[start_row - 1][finish_col]);
                        Min = min(Min, sum);
                    }
                    if (finish_col == colum) 
                    {
                        start_col = 1;
                        finish_col = width;
                        start_row++;
                        finish_row++;
                    }
                    else
                    {
                        start_col++;
                        finish_col++;
                    }
                }
            }
        }
    }
    cout << (check == true ? Min : -1);
    return 0;
}