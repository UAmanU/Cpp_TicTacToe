#include "include/Tile/figure.h"
#include "include/Errors/invalid_argument_error.h"
Figure convert_char_to_figure(char symbol)
{
    switch (symbol)
    {
    case 'X':
        return Figure::x;
    case 'O':
        return Figure::o;
    case 'empty':
        return Figure::empty;
    }
    throw InvalidArgumentError("Cannot convert this char to Figure.");
}