int plus1(int x, int y) {
	return x + y;
}

int plus2(int x, int y, int z) {
	return plus1(x, y) + z;
}

void main() {
	int r = plus2(1, 2, 3);
	return;
}
