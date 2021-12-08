//
// Created by ruipeng on 5/30/19.
//

#ifndef STABILA_ZKSNARK_ZKSNARK_SERVER_H
#define STABILA_ZKSNARK_ZKSNARK_SERVER_H

#include <memory>
#include <iostream>
#include <string>
#include <thread>
#include <grpcpp/grpcpp.h>
#include <grpc/support/log.h>

#include "api/zksnark.grpc.pb.h"

using grpc::Server;
using grpc::ServerAsyncResponseWriter;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::ServerCompletionQueue;
using grpc::Status;

using protocol::StabilaZksnark;
using protocol::ZksnarkRequest;
using protocol::Transaction;
using protocol::ZksnarkResponse;

class StabilaZksnarkServiceImpl final : public StabilaZksnark::Service {
    Status CheckZksnarkProof(ServerContext* context, const ZksnarkRequest* request, ZksnarkResponse* reply) override;
};

#endif //STABILA_ZKSNARK_ZKSNARK_SERVER_H
