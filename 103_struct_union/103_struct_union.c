#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t
#define d32 int32_t

// 联合，只能同时存储一个变量值
typedef union {
	d32 int_value;
	float float_value;
	char* string_value;
} Data;

typedef enum {
	INT,
	FLOAT,
	STRING
} DataType;

typedef struct {
	DataType type;
	Data data;
} TypedData;

void print_data(TypedData* typed_data);

int main(void)
{
	TypedData data1 = { INT, {.int_value = 10}};
	print_data(&data1);

	TypedData data2 = { FLOAT, {.float_value = 3.14} };
	print_data(&data2);

	TypedData data3 = { STRING, {.string_value = "Hello, Union"} };
	print_data(&data3);

	return 0;
}

void print_data(TypedData* typed_data)
{
	switch (typed_data->type)
	{
	case INT:
		printf("Integer: %" PRId32 "\n", typed_data->data.int_value);
		break;
	case FLOAT:
		printf("Integer: %f\n", typed_data->data.float_value);
		break;
	case STRING:
		printf("Integer: %s\n", typed_data->data.string_value);
		break;
	}
}