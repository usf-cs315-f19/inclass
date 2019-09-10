#include<stdio.h>

struct nt_info {
    char value_str[32];
    int bit_width;
    int range_start;
    int range_end;
};

void nt_info_init(struct nt_info *nt_data)
{
    nt_data->value_str[0] = '\0';
    nt_data->bit_width = 32;
    nt_data->range_start = 0;
    nt_data->range_end = 31;
}

void parse_command_line(int argc, char **argv, struct nt_info *nt_data)
{
    return;
}

void normalize_input_value(struct nt_info *nt_data)
{
    return;
}

void output_conversions(struct nt_info *nt_data)
{
    return;
}

int main(int argc, char **argv)
{
    struct nt_info nt_data;

    nt_info_init(&nt_data);
        
    parse_command_line(argc, argv, &nt_data);

    normalize_input_value(&nt_data);
    
    output_conversions(&nt_data);
    
    return 0;
}
