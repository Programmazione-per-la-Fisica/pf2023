# Esempio di uso di CMake

[CMake](https://www.cmake.org/) è un software che permette di gestire in modo completo il processo di compilazione (spesso chiamato _build_), test, pacchettizzazione, ecc. di progetti software. E' la soluzione maggiormente utilizzata per progetti C++.

La descrizione del progetto (file sorgenti, modalità di compilazione, test, ecc.) avviene in modo dichiarativo in un file chiamato [`CMakeLists.txt`](CMakeLists.txt), posto nella directory principale del progetto.

Il processo di build avviene tipicamente in due fasi:
1. configurazione del progetto, in cui si decide, tra le varie cose, il tipo di build da effettuare (ad es. se in modalità _debug_ o _release_)
2. compilazione vera e propria dei sorgenti e produzione degli _artificats_ finali (ad es. gli eseguibili)

In questo esempio vengono introdotti solo i concetti di base, ma sufficienti per l'uso che ne facciamo in questo corso, anche per quel che riguarda il progetto per l'esame.

Per configurare in debug mode

```sh
cmake -S . -B build/debug -DCMAKE_BUILD_TYPE=Debug
```

Per configurare in release mode

```sh
cmake -S . -B build/release -DCMAKE_BUILD_TYPE=Release
```

Per compilare il codice in debug mode

```sh
cmake --build build/debug
```

Aggiungere l'opzione `--verbose` per visualizzare in dettaglio i comandi eseguiti durante il processo.

Per eseguire l'eseguibile prodotto in debug mode (in questo caso `mandelbrot`)

```sh
build/debug/mandelbrot
```

Per eseguire gli eventuali test (che in questo caso sono assenti)

```sh
cmake --build build/debug --target test
```

Per eseguire diretamente l'eseguibile dei test (supponendo sia chiamato `all.t`), con maggiori dettagli

```sh
build/debug/all.t
```
