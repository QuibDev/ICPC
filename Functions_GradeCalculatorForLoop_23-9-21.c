
#include <stdio.h>

// basic for loop

const char *gradeCalculator(float percentage)
{
    if (percentage >= 70)
    {
        return "First Class with Distinction";
    }
    else if (percentage >= 60 && percentage < 70)
    {
        return "First Class";
    }
    else if (percentage >= 50 && percentage < 60)
    {
        return "Second Class";
    }
    else if (percentage >= 40 && percentage < 50)
    {
        return "Pass Class";
    }
    else
    {
        return "ATKT Failing Grade";
    }
};

int main()
{

    float scoreList[5] = {50, 50, 50, 50, 50};
    char *subjectList[5] = {"Mathematics", "Physics", "Chemistry", "Foreign Language", "Computer Science"};

    for (int i; i < 5; i++)
    {
        printf("\nYour grade in %s is %s", subjectList[i], gradeCalculator(scoreList[i]));
    };

    return 0;
}
