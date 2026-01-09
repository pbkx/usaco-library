template <typename T>
T build_mask(const string& s, char target) {
    static_assert(is_integral_v<T>, "T must be an integral type");
    T mask = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == target) {
            mask |= (T(1) << i);
        }
    }
    return mask;
}
