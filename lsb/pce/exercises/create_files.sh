#!/bin/bash

if [ -z "$1" ]; then
  echo "Uso: ./create-script.sh nome_da_pasta"
  exit 1
fi

folder_name="$1"

mkdir -p "$folder_name"

sequence=$(echo "$folder_name" | grep -oE 'pl[0-9]{2}')

if [ -z "$sequence" ]; then
  echo "Nome da pasta inválido. Deve estar no formato: 01_pce_plXX"
  exit 1
fi

for i in {01..09}; do
  touch "$folder_name/${sequence}_0$i.c"
done

echo "Pasta '$folder_name' e arquivos ${sequence}_01.c a ${sequence}_09.c criados com sucesso!"
