#pragma once
enum class Figure : char
{
    x = 'X',
    o = 'O',
    empty = '-'
};
Figure convert_char_to_figure(char symbol);