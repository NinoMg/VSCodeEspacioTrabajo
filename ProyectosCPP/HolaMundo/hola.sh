#!/bin/bash

executable=${0%.sh}
./$executable
echo "El archivo $executable retorno el valor = $?"

if [ $? -eq 0 ]; then
    echo "La ejecución fue exitosa con el código = 0"
else
    echo "La ejecución falló con el código de error $?"
fi

## Para ejecutar este archivo ############
##    $ chmod +x este-nombre-archivo.sh
##    $ ./este-nombre-archivo.sh
##########################################
