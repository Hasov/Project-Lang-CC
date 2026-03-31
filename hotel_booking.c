/*1. Cadastro de quartos (número de quartos, tipo de quarto, opção para vista pro mar)
2. Listar quartos (disponibilidade)
3. Reservar quarto (nome do cliente + convidados, data planejada para não haver conflito)
4. Cancelar reserva (podendo haver uma taxa)
5. Check-in
6. Check-out
7. Opção de taxa caso o cliente atrase para o check-in e check-out.*/

#include <stdio.h>

int main () {

//1. Cadastro de quartos (número de quartos, tipo de quarto, opção para vista pro mar)
static int rooms_floors, rooms, floors;
 rooms = 400;
 floors = 4;
 rooms_floors = rooms / floors;

printf("Quartos no total: %d, Quartos por andar: %d, Andares: %d\n", rooms, rooms_floors, floors);

int type_room;

type_room = 1; //solteiro
type_room = 2; //casal
type_room = 3; //vista pro mar

//2. Listar quartos (disponibilidade)

int block_rooms = 364;
int available_rooms = rooms - block_rooms;
printf("Quartos bloqueados: %d, Quartos disponíveis: %d\n", block_rooms, available_rooms);
}