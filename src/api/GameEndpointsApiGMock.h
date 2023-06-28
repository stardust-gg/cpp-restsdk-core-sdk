/**
 * Stardust API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 2023-06-15T19:52:41Z
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef GG_STARDUST_CORESDK_GameEndpointsApiGMock_H_
#define GG_STARDUST_CORESDK_GameEndpointsApiGMock_H_

#include <gmock/gmock.h>

#include "GameEndpointsApi.h"

namespace gg {
namespace stardust {
namespace coresdk {

using namespace gg::stardust::coresdk::model;


class  GameEndpointsApiMock : public IGameEndpointsApi
{
public:
    using Base = IGameEndpointsApi;

    GameEndpointsApiMock() = default;
    explicit GameEndpointsApiMock( std::shared_ptr<ApiClient> apiClient ) { };
    ~GameEndpointsApiMock() override = default;

    MOCK_METHOD0( gameGetGet, pplx::task<std::shared_ptr<SDGameGetResponse>> (
    ) );
    MOCK_METHOD1( gameMutatePut, pplx::task<std::shared_ptr<Object>> (
        std::shared_ptr<SDGameMutateRequest> sDGameMutateRequest
    ) );
};

}
}
}

#endif /* GG_STARDUST_CORESDK_GameEndpointsApiGMock_H_ */
