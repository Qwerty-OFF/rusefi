package com.rusefi.io.commands;

import java.io.DataInputStream;
import java.io.IOException;

import static com.rusefi.binaryprotocol.IoHelper.swap16;

public class ByteRange {
    private final int offset;
    private final int count;

    private ByteRange(int offset, int count) {
        this.offset = offset;
        this.count = count;
    }

    public int getOffset() {
        return offset;
    }

    public int getCount() {
        return count;
    }

    @Override
    public String toString() {
        return "{" +
                "offset=" + offset +
                ", count=" + count +
                '}';
    }

    public static ByteRange valueOf(byte[] payload) throws IOException {
        try (DataInputStream dis = WriteChunkCommand.createPayLoadStream(payload)) {
            int offset = swap16(dis.readShort());
            int count = swap16(dis.readShort());
            return new ByteRange(offset, count);
        }
    }
}
