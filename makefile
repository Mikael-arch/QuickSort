IMPRIME = @./bin/app_cor

all: clean tads exec _debug_tads _debug_all
	${IMPRIME} "Quicksort Starting" RB
	tree

clean:
	${IMPRIME} "excluindo os arquivos intermediários (código objeto)" VERMELHO
	rm -f ./obj/quicksort.o

	@echo 
	${IMPRIME} "excluindo os arquivos executáveis" RED
	rm -f ./bin/quicksort
	# rm -f ./bin/app_cor
	@echo

	@echo 
	${IMPRIME} "excluindo os arquivos executáveis para depuração" RED
	rm -f ./src/debug/quicksort
	rm -f ./src/debug/quicksort_completo
	@echo

tads:
	${IMPRIME} "compilando os tipos abstratos de dados" DO 
	gcc -c ./src/quicksort.c -I ./include/ -o ./obj/quicksort.o
	@echo

exec:
	${IMPRIME} "compilando as aplicações e gerando os executáveis" DO
	gcc -c ./app/index.c ./obj/quicksort.o -I ./include/ -o ./bin/quicksort -fsanitize=undefined 
	gcc ./apps/app_cor.c  ./obj/ec_rgb_colors.o   -I ./include/    -o ./bin/app_cor -fsanitize=undefined

	@echo

run:
	./bin/quicksort
 
 _debug_tads:
	@echo "compilando a aplicação e gerando o executável com opção de depuração" 
	gcc -g ./apps/index.c   -I ./include/ ./obj/*  -o ./src/debug/quicksort -fsanitize=undefined

_debug_all:
	@echo "compilando a aplicação e gerando o executável com opção de depuração completa" 
	gcc -g ./apps/index.c  -I ./include/ ./obj/ec_rgb_colors.o ./src/quicksort.c  -o ./src/debug/quicksort_completo -fsanitize=undefined
debug_tads:
	gdb ./src/debug/quicksort
debug_all:
	gdb ./src/debug/quicksort_completo