# Temperature Conversion Program

## Description

This is a simple C++ program that converts temperatures between Fahrenheit and Celsius. The program includes functions to perform the conversions and a user-friendly console interface to interact with the user.

## Features

- Convert temperatures from Fahrenheit to Celsius.
- Convert temperatures from Celsius to Fahrenheit.
- User-friendly console interface.
- Option to perform multiple conversions or exit the program.

## Functions

### fahrenheitToCelsius

```cpp
double fahrenheitToCelsius(double fahrenheit);
```

- Converts temperature from Fahrenheit to Celsius.
Parameters:
- fahrenheit: The temperature in Fahrenheit.
- Returns: The temperature in Celsius.


### celsiusToFahrenheit
```cpp
double celsiusToFahrenheit(double celsius);
```

- Converts temperature from Celsius to Fahrenheit.
Parameters:
- celsius: The temperature in Celsius.
- Returns: The temperature in Fahrenheit.


### convertTemperature
```cpp
void convertTemperature();
```

- Handles user interaction, including:
- Asking for the type of conversion.
- Taking the input temperature.
- Calling the appropriate conversion function.
- Displaying the result.

# Usage
1. Clone the Repository

git clone https://github.com/yourusername/temperature-conversion.git
cd temperature-conversion


2. Compile the Program

Use a C++ compiler to compile the program. 
For example, with g++:

g++ -o temp_convert main.cpp

3. Run the Program

./temp_convert


4. Follow the On-Screen Instructions

- Choose the type of conversion.
- Enter the temperature to convert.
- View the result.
- Choose whether to convert another temperature or exit the program.


## Example

Temperature Conversion Menu:
1. Fahrenheit to Celsius
2. Celsius to Fahrenheit
Enter your choice (1 or 2): 1
Enter temperature in Fahrenheit: 100
Temperature in Celsius: 37.7778°C
Do you want to convert another temperature? (y/n): y
Temperature Conversion Menu:
1. Fahrenheit to Celsius
2. Celsius to Fahrenheit
Enter your choice (1 or 2): 2
Enter temperature in Celsius: 0
Temperature in Fahrenheit: 32°F
Do you want to convert another temperature? (y/n): n
Exiting program. Goodbye!


## Testing
- Ensure that the functions return accurate conversions.
- Test edge cases like the freezing point (32°F / 0°C), boiling point (212°F / 100°C), and negative temperatures (e.g., -40°F / -40°C).
