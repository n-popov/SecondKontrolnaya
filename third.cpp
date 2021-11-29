struct Coon {
    unsigned int id; // номер кота
    char name[100];  // имя кота
    double weight;   // вес кота
    double food;     // вес съеденной котом пищи
};

bool operator<(Coon lhs, Coon rhs) {
    return lhs.food / lhs.weight < rhs.food / rhs.weight;
}

Coon* find_the_most_fed_cat(Coon* atc, unsigned int n_cats) {
    Coon* max = atc;
    for(auto i = 1; i < n_cats; i++) {
        if (*max < atc[i]) {
            max = atc + i;
        }
    }
    return max;
}

