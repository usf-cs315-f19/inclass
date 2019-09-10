#include<stdio.h>

#define MAX_VALUE_STR_LEN 32

struct nt_info {
    char value_str[MAX_VALUE_STR_LEN];
    unsigned int value;
    int bit_width;
    int range_start;
    int range_end;
};

void nt_info_init(struct nt_info *nt_data)
{
    nt_data->value_str[0] = '\0';
    nt_data->value = 0;
    nt_data->bit_width = 32;
    nt_data->range_start = 0;
    nt_data->range_end = 31;
    return;
}

void nt_info_print(struct nt_info *nt_data)
{
    return;
}

void parse_command_line(struct nt_info *nt_data)
{
    return;
}

void normalize_input_value(struct nt_info *nt_data)
{
    return;
}

void print_conversions(struct nt_info *nt_data)
{
    return;
}

int main(int argc, char **argv)
{
    struct nt_info nt_data;

    nt_info_init(&nt_data);
    nt_info_print(&nt_data);
    
    parse_command_line(&nt_data);

    normalize_input_value(&nt_data);

    print_conversions(&nt_data);
    
    return 0;
}
