SRC = unity/unity.c\
src/number_conversion.c\
test/test_conversion.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = number_conversion.exe

BUILD = build

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}

clean:
	rm -rf $(PROJECT_NAME)
