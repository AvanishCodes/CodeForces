import java.util.*;

public class ColorChoices
{
    int[][] grid;
    int numberOfColors;
    int numberOfRows;
    int numberOfColumns;
    int numberOfCombinations;

    public static void main(String[] args)
    {
        ColorChoices solution = new ColorChoices();
        solution.begin();

    }

    void begin()
    {
        numberOfCombinations = 0;
        Scanner consoleInput = new Scanner(System.in);
        System.out.print("Enter number of colors: ");
        numberOfColors = consoleInput.nextInt();
        System.out.print("Enter number of rows: ");
        numberOfRows = consoleInput.nextInt();
        System.out.print("Enter number of columns: ");
        numberOfColumns = consoleInput.nextInt();
        grid = new int[numberOfRows][numberOfColumns];

        solve(0, 0);

        System.out.println("There are " + numberOfCombinations + " different combinations of " + numberOfColors + " colors.");
    }

    void solve(int r, int c)
    {
        for(int i = 1; i <= numberOfColors; i++)
        {   
            if(valid(r, c, i))
            {
                grid[r][c] = i;
                if(r == numberOfRows - 1 && c == numberOfColumns - 1) 
                {
                    printBoard();
                    numberOfCombinations++;
                }
                else if(r == numberOfRows - 1) solve(0, c + 1);
                else solve(r + 1, c);
            }
        }
        grid[r][c] = 0;
    }

    boolean valid(int r, int c, int n)
    {
        return(leftOK(r, c, n) && rightOK(r, c, n) &&  topOK(r, c, n) &&  bottomOK(r, c, n));
    }

    boolean leftOK(int r, int c, int n)
    {
        if(c == 0) return true;
        if(grid[r][c - 1] != n) return true;
        return false;
    }

    boolean rightOK(int r, int c, int n)
    {
        if(c == numberOfColumns - 1) return true;
        if(grid[r][c + 1] != n) return true;
        return false;
    }

    boolean topOK(int r, int c, int n)
    {
        if(r == 0) return true;
        if(grid[r - 1][c] != n) return true;
        return false;
    }

    boolean bottomOK(int r, int c, int n)
    {
        if(r == numberOfRows - 1) return true;
        if(grid[r + 1][c] != n) return true;
        return false;
    }

    void printBoard()
    {
        for(int i = 0; i < numberOfRows; i++)
        {
            for(int j = 0; j < numberOfColumns; j++)
            {
                System.out.print(grid[i][j]);
            }
            System.out.println();
        }
        System.out.println();
    }
}