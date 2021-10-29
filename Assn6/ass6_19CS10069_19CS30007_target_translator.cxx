void computeActivationRecord(symtable *st) {

    // TODO: maybe augment return waala logic
    int param_offset = 8;
    int locals_offset = -4;

    for(auto &it: st->symbols) {
        if(it.category != "param") {
            st->ActivationRecord[it.name] = param_offset;
            param_offset += it.size;
        } else if(it.name != "return") {
            st->ActivationRecord[it.name] = locals_offset;
            locals_offset += it.size;
        }
    }    
    return;
}