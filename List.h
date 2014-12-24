//list templat chapter 15
template<class T> class List{
private:
	struct Link{ T val; Link *next;};
	struct Chunk{
		enum{chunk_size= 15};
 		Link v[chunk_size];
		Chunk *next;
	}
	Chunk *allocated;
