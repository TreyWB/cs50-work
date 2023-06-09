#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO - User input: How many cents owed
    int get_cents;
    do
    {
        get_cents = get_int("Change Owed: ");
    }
    while (get_cents < 0);

    return get_cents;
}

int calculate_quarters(int cents)
{
    // TODO
    int calculate_quarters;

    calculate_quarters = (cents / 25);

    // printf("Quarters: %i\n", calculate_quarters);

    return calculate_quarters;
}

int calculate_dimes(int cents)
{
    // TODO
    int calculate_dimes;

    calculate_dimes = (cents / 10);

    // printf("Dimes: %i\n", calculate_dimes);

    return calculate_dimes;
}

int calculate_nickels(int cents)
{
    // TODO
    int calculate_nickels;

    calculate_nickels = (cents / 5);

    // printf("Nickels: %i\n", calculate_nickels);

    return calculate_nickels;
}

int calculate_pennies(int cents)
{
    // TODO
    int calculate_pennies;

    calculate_pennies = (cents / 1);

    // printf("Pennies: %i\n", calculate_pennies);

    return calculate_pennies;
}
