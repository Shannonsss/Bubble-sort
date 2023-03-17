void bsort(int* data, int n, char input)
{

    int i, j, temp;

    // n-1 loop
    for (i = n - 1; i > 0; i--)
    {

        // 每次循環要比較次數
        for (j = 0; j <= i - 1; j++)
        {  

            // 比大小後交換
            // 大到小 
            switch (input)
            {

            case 'a':
                // 判斷大小後交換
                if (data[j] < data[j + 1])
                {
                    temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;

                }
                break;



                // 小到大
            case 'b':
                // 判斷大小後交換
                if (data[j] > data[j + 1])
                {
                    temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
                break;

            }
        }

    }
}