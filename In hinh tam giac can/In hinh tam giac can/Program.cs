using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace In_hinh_tam_giac_can
{
    class Program
    {
        static void Main(string[] args)
        {
            int h = 6;
            for (int i = 0; i < h + 1; i++)
            {
                for (int j = i; j < 7; j++)
                {
                    if ((j >= h - i + 1) && (j <= h + i - 1))
                    {
                        Console.Write("*");
                    }
                    else
                    {
                        Console.Write(" ");
                    }
                }

                Console.WriteLine("\n");
            }
        }
    }
}
