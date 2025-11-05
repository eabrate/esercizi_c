int count_letters(string text);
int count_words(string text);
int count_sentences(string text);


int main(void)
{
    // Prompt the user some text
    string text = get_string("Text: ");

    // Count the number of letters, words, and sentences in the text
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // Compute the Coleman-Liau index
    float L = (letters / (float) words) * 100;
    float S = (sentences / (float) words) * 100;
    float index = 0.0588 * L - 0.296 * S -15.8;
    int grade = round(index);

    // Print the grade level
    if (grade < 1)
    {
        printf("Before grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }
}

int count_letters(string text)
{
    // Return the number of letters in text
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            count++;
        }
    }
    return count;
}

int count_words(string text)
{
    // Return the number of words in text
    int count = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            count++;
        }
    }
    return count;
}

int count_sentences(string text)
{
    // Return the number of sentences in text
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
    }
    return count;
}
