# Insieme di Mandelbrot

In questo esempio vengono implementati il calcolo e la visualizzazione
dell'[insieme di
Mandelbrot](https://it.wikipedia.org/wiki/Insieme_di_Mandelbrot), sia in forma
testuale che in forma grafica usando la libreria
[SFML](https://www.sfml-dev.org/).

I due programmi hanno la stessa struttura:

* una funzione `is_in_mandelbrot_set` che calcola se un certo numero complesso
  appartiene o meno all'insieme di Mandelbrot
* una struttura dati `Image` che astrae la rapprsentazione grafica dell'immagine dell'insieme
* una funzione `main` che crea una `Image` di dimensioni opportune, "colora" i
  punti che appartengono all'insieme e visualizza l'immagine colorata

Si noti come una funzione (libera come `is_in_mandelbrot_set` o membro (metodo)
come `Image::show`) si possa definire già alla prima dichiarazione oppure si
possa prima dichiarare e solo successivamente definire. Si noti anche come il
`main` delle due versioni sia sostanzialmente identico e come le differenze
siano state nascoste nell'implementazione della classe `Image`.

Per compilare la forma testuale:

```sh
g++ -Wall -Wextra main_tty.cpp -o mandelbrot_tty
```

Per compilare la forma grafica:

```sh
g++ -Wall -Wextra main_sfml.cpp -o mandelbrot_sfml -lsfml-window -lsfml-graphics -lsfml-system
```

sincerandosi prima di aver installato SFML:

```sh
sudo apt install libsfml-dev
```

(analogamente per `brew` su MacOS)
