class numberGen {
    public:
        numberGen() : engine(std::random_device{}()) {}

        unsigned int GRInt(int min, int max) {
            std::uniform_int_distribution<int> dist(min, max);
            return dist(engine);
        }

        int SizeCorr(int m, int min, int max) {
            if (min > max || min < 0 || m <= 0) {
                throw std::invalid_argument("Invalid arguments for SizeCorr.");
            }
            for (int i = 0; i < 1000; ++i) {
                int size = GRInt(min, max);
                if (size % m == 0) {
                    return size;
                }
            }
            throw std::runtime_error("Failed to generate a valid size.");
        }


    private:
        std::mt19937 engine; // Persistent random engine
    };
